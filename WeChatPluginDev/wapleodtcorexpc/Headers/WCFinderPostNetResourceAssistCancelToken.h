//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPostNetResourceAssistCancelToken : NSObject
{
    CDUnknownBlockType _cancelBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)dealloc;
- (void)cancel;

@end

