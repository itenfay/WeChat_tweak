//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString, NSString;

@interface WCFinderParseContentModel : NSObject
{
    NSMutableString *_content;
    NSMutableString *_contentHighlight;
    NSMutableArray *_topicsArray;
    NSMutableArray *_mentionArray;
    NSMutableArray *_mentionRangeArray;
    unsigned long long _lastParseTimeStamp;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_lastParseTimeStamp;
+ (void)PBArrayAdd_mentionArray;
+ (void)PBArrayAdd_topicsArray;
+ (void)PBArrayAdd_contentHighlight;
+ (void)PBArrayAdd_content;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastParseTimeStamp; // @synthesize lastParseTimeStamp=_lastParseTimeStamp;
@property(retain, nonatomic) NSMutableArray *mentionRangeArray; // @synthesize mentionRangeArray=_mentionRangeArray;
@property(retain, nonatomic) NSMutableArray *mentionArray; // @synthesize mentionArray=_mentionArray;
@property(retain, nonatomic) NSMutableArray *topicsArray; // @synthesize topicsArray=_topicsArray;
@property(retain, nonatomic) NSMutableString *contentHighlight; // @synthesize contentHighlight=_contentHighlight;
@property(retain, nonatomic) NSMutableString *content; // @synthesize content=_content;
- (id)init;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

