//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIResponder.h>

@class WCFinderLiveAudienceLogReporter;

@interface UIResponder (audienceLogReporter)
+ (id)currentFirstResponder;
@property(readonly, nonatomic) WCFinderLiveAudienceLogReporter *audienceLogReporter;
- (void)findFirstResponder:(id)arg1;
@end

