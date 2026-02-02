//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface MMEmbedExcerptUtil : NSObject
{
    NSMutableSet *_exposeReportStrSet;
}

+ (void)reportWithMsg:(id)arg1 operateType:(unsigned int)arg2;
+ (id)createEmbedExcerptWebview:(id)arg1 scene:(unsigned int)arg2 visibleViewController:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposeReportStrSet; // @synthesize exposeReportStrSet=_exposeReportStrSet;

@end

