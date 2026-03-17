//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ShareDataToOpenSDKController;

@interface MMImageActionOpenDeviceItem : NSObject
{
    ShareDataToOpenSDKController *_shareVc;
}

@property(retain, nonatomic) ShareDataToOpenSDKController *shareVc; // @synthesize shareVc=_shareVc;
- (void)handleWithImage;
- (id)init;

@end

