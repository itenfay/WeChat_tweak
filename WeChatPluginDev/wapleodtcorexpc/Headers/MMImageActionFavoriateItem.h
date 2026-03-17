//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMImageActionFavoriateItem : NSObject
{
    CDUnknownBlockType _modifyBlock;
}

@property(copy, nonatomic) CDUnknownBlockType modifyBlock; // @synthesize modifyBlock=_modifyBlock;
- (void)handleWithImage;
- (id)init;

@end
