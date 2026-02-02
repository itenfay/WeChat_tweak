//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLocationManagerComplectionModel : NSObject
{
    _Bool _requiredMapLocation;
    CDUnknownBlockType _complectionBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType complectionBlock; // @synthesize complectionBlock=_complectionBlock;
@property(nonatomic) _Bool requiredMapLocation; // @synthesize requiredMapLocation=_requiredMapLocation;

@end

