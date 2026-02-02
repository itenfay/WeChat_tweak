//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonCustomCreatePreProcessConfig, NSString;

@interface EmoticonCustomCreateTask : NSObject
{
    unsigned long long _source;
    unsigned long long _editorType;
    NSString *_feedId;
    NSString *_nonceId;
    EmoticonCustomCreatePreProcessConfig *_preprocessConfig;
}

+ (id)finderTaskWithFeedId:(id)arg1 nonceId:(id)arg2;
+ (id)defaultTask;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomCreatePreProcessConfig *preprocessConfig; // @synthesize preprocessConfig=_preprocessConfig;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long editorType; // @synthesize editorType=_editorType;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (id)init;

@end

