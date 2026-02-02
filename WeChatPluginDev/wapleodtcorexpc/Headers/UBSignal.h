//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface UBSignal
{
}

+ (id)emptySignal;
- (id)initWithProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long maxObservers;
@property(copy, nonatomic) CDUnknownBlockType observerAdded;
@property(readonly) unsigned long long observerCount;
@property(copy, nonatomic) CDUnknownBlockType observerRemoved;
@property(readonly) Class superclass;

@end

