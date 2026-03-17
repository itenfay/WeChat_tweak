//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ConfigInfo : NSObject
{
    int _muteMicrophone;
    int _muteEarphone;
    int _handsFree;
}

@property(nonatomic) int handsFree; // @synthesize handsFree=_handsFree;
@property(nonatomic) int muteEarphone; // @synthesize muteEarphone=_muteEarphone;
@property(nonatomic) int muteMicrophone; // @synthesize muteMicrophone=_muteMicrophone;
- (id)init;

@end

