//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayGPReportUtil : NSObject
{
}

+ (void)logGroupPayIDKey:(unsigned int)arg1;
+ (void)logGroupPayDataReport:(unsigned int)arg1 chatroomMemberCount:(unsigned int)arg2 participateCount:(unsigned int)arg3 amount:(unsigned long long)arg4 theme:(id)arg5 detailData:(id)arg6;
+ (void)logGroupPayEventReport:(unsigned int)arg1;
+ (void)logGroupPayClickReport:(unsigned int)arg1 subType:(unsigned int)arg2 mode:(unsigned int)arg3;
+ (void)logGroupPayClickReport:(unsigned int)arg1 subType:(unsigned int)arg2;

@end

