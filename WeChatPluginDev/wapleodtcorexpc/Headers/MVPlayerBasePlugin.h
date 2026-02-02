//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMVPlayer, NSString;

@interface MVPlayerBasePlugin : NSObject
{
    MMMVPlayer *_player;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMMVPlayer *player; // @synthesize player=_player;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

