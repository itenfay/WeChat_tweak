//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@class NSString;

@interface SolitaireOperation : NSOperation
{
    NSString *_nsContent;
    CDUnknownBlockType _finishBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
- (_Bool)isHasOccupyKeyword:(id)arg1;
- (void)main;
- (id)initWithContent:(id)arg1 FinishBlock:(CDUnknownBlockType)arg2;

@end

