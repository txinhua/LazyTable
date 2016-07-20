/*
 Copyright (C) 2015 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 Helper object for managing the downloading of a particular app's icon.
  It uses NSURLSession/NSURLSessionDataTask to download the app's icon in the background if it does not
  yet exist and works in conjunction with the RootViewController to manage which apps need their icon.
 */

@class AppRecord;
@class VCPhoto;
@interface IconDownloader : NSObject

@property (nonatomic, strong) AppRecord *appRecord;
@property (nonatomic, strong) VCPhoto *vcPhoto;
@property (nonatomic, copy) void (^completionHandler)(void);

- (void)startDownload;
- (void)cancelDownload;

@end
