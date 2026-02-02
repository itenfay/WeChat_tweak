//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, WSAllTabRedDotInfo;

@interface WSTabRedDotInfoCollector : NSObject
{
    WSAllTabRedDotInfo *_allTabRedDotInfo;
    NSNumber *_currentBubbleCategory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *currentBubbleCategory; // @synthesize currentBubbleCategory=_currentBubbleCategory;
@property(retain, nonatomic) WSAllTabRedDotInfo *allTabRedDotInfo; // @synthesize allTabRedDotInfo=_allTabRedDotInfo;
- (void)reportTabTipsBubbleClick:(long long)arg1;
- (void)reportTabTipsBubbleExpose:(long long)arg1;
- (id)getBriefInfo;
- (void)configureTabContentReddot:(id)arg1 showInfo:(id)arg2 category:(long long)arg3 extraLog:(id)arg4;
- (void)configureTabNumberReddot:(id)arg1 ctrlInfo:(id)arg2 showInfo:(id)arg3 category:(long long)arg4 extraLog:(id)arg5;
- (unsigned int)returnHaveRedDotBubble:(id)arg1;
- (id)returnAllTabRedDotInfoReportString;
- (void)clear;
- (id)init;

@end

