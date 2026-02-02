//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLivePollingFetchRequestBufferModel : NSObject
{
    long long _cmdId;
    id _reqBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id reqBuffer; // @synthesize reqBuffer=_reqBuffer;
@property(nonatomic) long long cmdId; // @synthesize cmdId=_cmdId;
- (id)initWithCmdId:(long long)arg1;

@end

