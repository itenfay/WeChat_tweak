//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderJumpNativeCommonPostInfo : NSObject
{
    int _buttonAction;
    int _postToComment;
    NSString *_songId;
    NSString *_audioId;
    NSString *_miaojianMusicId;
    NSString *_templateId;
    NSString *_templateMusicId;
    long long _templateType;
    NSArray *_topics;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int postToComment; // @synthesize postToComment=_postToComment;
@property(nonatomic) int buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) long long templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *templateMusicId; // @synthesize templateMusicId=_templateMusicId;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *miaojianMusicId; // @synthesize miaojianMusicId=_miaojianMusicId;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (_Bool)enablePostToComment;

@end

