//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCFinderFeedSubCommentCellStyleConfig : NSObject
{
    double _avatarLeftMargin;
    UIColor *_customBackgroundColor;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double avatarLeftMargin; // @synthesize avatarLeftMargin=_avatarLeftMargin;

@end

