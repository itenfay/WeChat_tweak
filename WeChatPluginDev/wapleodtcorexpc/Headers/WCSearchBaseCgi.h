//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCSearchBaseCgi
{
    CDUnknownBlockType __successBlock;
    CDUnknownBlockType __failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType _failBlock; // @synthesize _failBlock=__failBlock;
@property(copy, nonatomic) CDUnknownBlockType _successBlock; // @synthesize _successBlock=__successBlock;
- (id)init;

@end
