//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DataReportViewDataEntity : NSObject
{
    NSString *_viewId;
    NSMutableDictionary *_viewParams;
    NSMutableDictionary *_dynamicParamsBlocks;
    NSMutableDictionary *_innerProperty;
    NSMutableDictionary *_reportPolicy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(retain, nonatomic) NSMutableDictionary *innerProperty; // @synthesize innerProperty=_innerProperty;
@property(retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks; // @synthesize dynamicParamsBlocks=_dynamicParamsBlocks;
@property(retain, nonatomic) NSMutableDictionary *viewParams; // @synthesize viewParams=_viewParams;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
- (id)toString;
- (void)reset;
- (id)init;

@end

