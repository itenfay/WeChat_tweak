//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WARemoteDebugRecvInterval : NSObject
{
    unsigned int _start;
    unsigned int _end;
    NSMutableArray *_messageList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *messageList; // @synthesize messageList=_messageList;
@property(nonatomic) unsigned int end; // @synthesize end=_end;
@property(nonatomic) unsigned int start; // @synthesize start=_start;
- (id)description;
- (void)mergeRecvInterval:(id)arg1;

@end

