//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GCTwoResultIntegrate : NSObject
{
    _Bool _isCompleted;
    int _targetNum;
    id _firstResult;
    id _secondResult;
    CDUnknownBlockType _didSelect;
    CDUnknownBlockType _intergrateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType intergrateBlock; // @synthesize intergrateBlock=_intergrateBlock;
@property(nonatomic) int targetNum; // @synthesize targetNum=_targetNum;
@property(copy, nonatomic) CDUnknownBlockType didSelect; // @synthesize didSelect=_didSelect;
@property(retain, nonatomic) id secondResult; // @synthesize secondResult=_secondResult;
@property(retain, nonatomic) id firstResult; // @synthesize firstResult=_firstResult;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
- (void)onCompleteBlock:(CDUnknownBlockType)arg1;
- (void)decreateNumAndCheckCompete;
- (void)onSecondResultGet:(id)arg1;
- (void)onFirstResultGet:(id)arg1;
- (id)init;

@end

