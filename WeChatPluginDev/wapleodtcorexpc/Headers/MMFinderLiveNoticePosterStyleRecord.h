//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveQRCodePosterStyle, NSString;

@interface MMFinderLiveNoticePosterStyleRecord : NSObject
{
    unsigned int _styleVersion;
    unsigned long long _elementIndex;
    FinderLiveQRCodePosterStyle *_style;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_styleVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)styleVersion;
+ (id)swift_style;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)style;
+ (id)swift_elementIndex;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)elementIndex;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int styleVersion; // @synthesize styleVersion=_styleVersion;
@property(retain, nonatomic) FinderLiveQRCodePosterStyle *style; // @synthesize style=_style;
@property(nonatomic) unsigned long long elementIndex; // @synthesize elementIndex=_elementIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

