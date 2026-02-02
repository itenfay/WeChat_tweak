//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface TingFinderHelper : NSObject
{
}

+ (void)setFinderProfileContext:(id)arg1 finderPushParams:(id)arg2;
+ (_Bool)isEmbededFinderProfile:(id)arg1;
+ (void)getDataItemArrWithListenFinderInfoArr:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
