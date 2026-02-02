//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WCFinderLiteAppExtraParams : NSObject
{
    CDUnknownBlockType _onDispatch;
    CDUnknownBlockType _onHalfCloseAction;
    NSDictionary *_liteAppStoreDataDict;
    CDUnknownBlockType _openResultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openResultBlock; // @synthesize openResultBlock=_openResultBlock;
@property(retain, nonatomic) NSDictionary *liteAppStoreDataDict; // @synthesize liteAppStoreDataDict=_liteAppStoreDataDict;
@property(copy, nonatomic) CDUnknownBlockType onHalfCloseAction; // @synthesize onHalfCloseAction=_onHalfCloseAction;
@property(copy, nonatomic) CDUnknownBlockType onDispatch; // @synthesize onDispatch=_onDispatch;

@end

