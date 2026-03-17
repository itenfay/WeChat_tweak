//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJMovieTextSuggestionSeqBuffer : NSObject
{
    unsigned long long _seqNumber;
}

+ (void)initialize;
+ (void)PBArrayAdd_seqNumber;
@property(nonatomic) unsigned long long seqNumber; // @synthesize seqNumber=_seqNumber;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

