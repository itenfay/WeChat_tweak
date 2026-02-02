//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPModeSwitchStateMachine : NSObject
{
    int _status;
}

@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (int)doAction:(int)arg1;
- (void)ChangeStatus:(int)arg1;
- (void)resetStatus;
- (id)init;

@end

