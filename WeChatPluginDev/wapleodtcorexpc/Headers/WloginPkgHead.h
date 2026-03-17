//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WloginPkgHead : NSObject
{
    struct {
        unsigned short wVersion;
        unsigned short wCommand;
        unsigned short wSeq_num;
        unsigned int dwUin;
        unsigned char cExtVer;
        unsigned char cCmdVer;
        unsigned char cRetryTimes;
        unsigned int dwClientType;
        unsigned int dwPubNo;
        unsigned int dwInstanceID;
    } stClientPkgHead;
    struct {
        unsigned short wVersion;
        unsigned short wCommand;
        unsigned short wSeq_num;
        unsigned int dwUin;
        unsigned short wFlag;
        unsigned char cRetryTimes;
    } stServerPkgHead;
}

- (unsigned short)pkgCmd;
- (void)setPkgCmd:(unsigned short)arg1;
- (unsigned int)pkgUin;
- (void)setPkgUin:(unsigned int)arg1;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (_Bool)resetHead;
- (id)initWithVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

