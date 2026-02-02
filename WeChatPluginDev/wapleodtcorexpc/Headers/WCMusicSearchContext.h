//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMusicSearchContext : NSObject
{
    unsigned int _offset;
    NSString *_query;
    NSObject *_customRequestExtraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *customRequestExtraData; // @synthesize customRequestExtraData=_customRequestExtraData;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)initWithQuery:(id)arg1;

@end

