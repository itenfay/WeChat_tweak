//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCRedEnvelopesStoryPlayerHttpMediaWrap
{
    unsigned int _subtypeId;
    NSString *_resourceURL;
    long long _index;
}

- (void).cxx_destruct;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned int subtypeId; // @synthesize subtypeId=_subtypeId;
@property(retain, nonatomic) NSString *resourceURL; // @synthesize resourceURL=_resourceURL;
- (id)initWithSubtypeId:(unsigned int)arg1 resIndex:(long long)arg2;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;

@end

