//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLongLink : NSObject
{
    _Bool m_isConnected;
    basic_string_5909a4e2 m_channelName;
    void *m_llConfig;
}

+ (id)defaultLongLink;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMainLongLink;
- (void)disconnect;
- (void)connect;
- (void *)name;
- (void)dealloc;
- (id)initWithChannelName:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;

@end

