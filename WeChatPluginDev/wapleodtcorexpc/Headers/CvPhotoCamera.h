//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureStillImageOutput;
@protocol CvPhotoCameraDelegate;

@interface CvPhotoCamera
{
    AVCaptureStillImageOutput *stillImageOutput;
    id <CvPhotoCameraDelegate> delegate;
}

@property(nonatomic) id <CvPhotoCameraDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput;
- (void)createCustomVideoPreview;
- (void)createCaptureOutput;
- (void)createStillImageOutput;
- (void)stop;
- (void)takePicture;

@end

