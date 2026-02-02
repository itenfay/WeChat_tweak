//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MassSendCardMsgItem : NSObject
{
    NSString *_title;
    NSString *_url;
    NSString *_urlId;
    NSNumber *_time;
    NSString *_cover;
    NSString *_cover_1_1;
    NSString *_digest;
    NSNumber *_itemShowType;
    NSNumber *_play_length;
    NSString *_play_url;
    NSString *_player;
    NSString *_vid;
    NSNumber *_picNum;
    NSNumber *_videoWidth;
    NSNumber *_videoHeight;
    NSNumber *_isPaySubscribe;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTitle:(id)arg1 url:(id)arg2 urlId:(id)arg3 time:(id)arg4 cover:(id)arg5 cover_1_1:(id)arg6 digest:(id)arg7 itemShowType:(id)arg8 play_length:(id)arg9 play_url:(id)arg10 player:(id)arg11 vid:(id)arg12 picNum:(id)arg13 videoWidth:(id)arg14 videoHeight:(id)arg15 isPaySubscribe:(id)arg16;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(retain, nonatomic) NSNumber *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(retain, nonatomic) NSNumber *videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) NSNumber *picNum; // @synthesize picNum=_picNum;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *play_url; // @synthesize play_url=_play_url;
@property(retain, nonatomic) NSNumber *play_length; // @synthesize play_length=_play_length;
@property(retain, nonatomic) NSNumber *itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *cover_1_1; // @synthesize cover_1_1=_cover_1_1;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *urlId; // @synthesize urlId=_urlId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toList;

@end

