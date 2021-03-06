// CBPhotoBrowserAssetModel.h
// Copyright (c) 2017 陈超邦.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

@interface CBPhotoBrowserAssetModel : NSObject

/**
 Asset type.
 
 - CBPhotoSelecterAssetModelMediaTypePhoto: Photo type.
 - CBPhotoSelecterAssetModelMediaTypeLivePhoto: Live photo.
 - CBPhotoSelecterAssetModelMediaTypeGif: Gif photo.
 - CBPhotoSelecterAssetModelMediaTypeVideo: Video.
 - CBPhotoSelecterAssetModelMediaTypeAudio: Audio.
 */
@property (nonatomic, assign, readwrite) NSInteger mediatype;

/**
 Image, set when mediatype is image.
 */
@property (nonatomic, strong, readwrite) UIImage *smallSizeImage;
@property (nonatomic, strong, readwrite) UIImage *middleSizeImage;
@property (nonatomic, strong, readwrite) UIImage *fullSizeImage;

/**
 Live photo, set when mediatype is live photo.
 */
@property (nonatomic, strong, readwrite) PHLivePhoto *livePhoto;

/**
 Source imageView.
 */
@property (nonatomic, strong, readwrite) UIView *sourceView;

/**
 Asset resource.
 */
@property (nonatomic, strong, readwrite) PHAsset *asset;


@end
