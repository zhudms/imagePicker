//
//  ViewController.m
//  ImagePickerDemo
//
//  Created by 融易乐 on 2017/9/18.
//  Copyright © 2017年 融易乐. All rights reserved.
//

#import "ViewController.h"
#import "CBPic2ker.h"

@interface ViewController ()<CBPickerControllerDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIButton *button=[UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = CGRectMake(100, 100, 175, 64);
    //设置按钮文字:
    [button setTitle:@"我是按钮" forState:UIControlStateNormal];
    button.backgroundColor=[UIColor redColor];
    [button addTarget:self action:@selector(clickButton) forControlEvents:UIControlEventTouchUpInside];

    [self.view addSubview:button];
}

-(void)clickButton{
    NSLog(@"onButtonClick");
    CBPhotoSelecterController *controller = [[CBPhotoSelecterController alloc] initWithDelegate:self];
    controller.columnNumber = 4;
    controller.maxSlectedImagesCount = 1;
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:controller];
    [self presentViewController:nav animated:YES completion:nil];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)photoSelecterController:(CBPhotoSelecterController *)pickerController sourceAsset:(NSArray *)sourceAsset {
    NSLog(@"photoSelecterController");
}

- (void)photoSelecterDidCancelWithController:(CBPhotoSelecterController *)pickerController {
    NSLog(@"photoSelecterDidCancelWithController");
}
@end
