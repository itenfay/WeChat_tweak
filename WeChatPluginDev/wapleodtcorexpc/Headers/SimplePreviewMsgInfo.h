//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SimplePreviewMsgInfo : NSObject
{
    NSString *_imagePath;
}

@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (id)getSightPath;
- (id)getImgPath;

@end

