//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoAttr, MMShortVideoParamModel, NSString, UIImage;

@interface MMTextStateVideoItem : NSObject
{
    NSString *_videoPath;
    UIImage *_videoThumbImage;
    EditVideoAttr *_editVideoAttr;
    MMShortVideoParamModel *_videoParamModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMShortVideoParamModel *videoParamModel; // @synthesize videoParamModel=_videoParamModel;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) UIImage *videoThumbImage; // @synthesize videoThumbImage=_videoThumbImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

@end

