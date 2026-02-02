//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GCDWebServerHandler : NSObject
{
    CDUnknownBlockType _matchBlock;
    CDUnknownBlockType _asyncProcessBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType asyncProcessBlock; // @synthesize asyncProcessBlock=_asyncProcessBlock;
@property(readonly, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
- (id)initWithMatchBlock:(CDUnknownBlockType)arg1 asyncProcessBlock:(CDUnknownBlockType)arg2;

@end

