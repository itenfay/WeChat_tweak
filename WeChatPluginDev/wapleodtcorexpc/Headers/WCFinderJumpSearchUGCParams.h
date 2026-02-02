//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpSearchUGCParams : NSObject
{
    unsigned int _search_scene;
    unsigned int _comment_scene;
    unsigned long long _object_id;
    NSString *_stream_title;
    NSString *_query;
    NSString *_session_buffer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int comment_scene; // @synthesize comment_scene=_comment_scene;
@property(nonatomic) unsigned int search_scene; // @synthesize search_scene=_search_scene;
@property(retain, nonatomic) NSString *session_buffer; // @synthesize session_buffer=_session_buffer;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *stream_title; // @synthesize stream_title=_stream_title;
@property(nonatomic) unsigned long long object_id; // @synthesize object_id=_object_id;

@end

