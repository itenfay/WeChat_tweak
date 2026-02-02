//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCShareExcerptReportInfo : NSObject
{
    NSString *_shareExcerpt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareExcerpt; // @synthesize shareExcerpt=_shareExcerpt;
- (void)reportWithToInfo:(id)arg1 shareScene:(unsigned long long)arg2;
- (void)reportForMoments:(id)arg1;
- (void)reportForChats:(id)arg1;

@end

