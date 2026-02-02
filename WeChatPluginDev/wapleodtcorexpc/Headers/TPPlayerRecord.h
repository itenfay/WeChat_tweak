//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerRecord : NSObject
{
    _Bool _useP2p;
    long long _fileOpenedTime;
    long long _firstPacketReadTime;
    NSString *_definition;
    long long _playerType;
}

- (void).cxx_destruct;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) _Bool useP2p; // @synthesize useP2p=_useP2p;
@property(retain, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(nonatomic) long long firstPacketReadTime; // @synthesize firstPacketReadTime=_firstPacketReadTime;
@property(nonatomic) long long fileOpenedTime; // @synthesize fileOpenedTime=_fileOpenedTime;

@end

