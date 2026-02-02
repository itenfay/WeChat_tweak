//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WloginTlv : NSObject
{
    unsigned short wTlvT;
}

@property unsigned short wTlvT; // @synthesize wTlvT;
- (id)copy;
- (id)getTlvTagString;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (id)initWithTag:(unsigned short)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

