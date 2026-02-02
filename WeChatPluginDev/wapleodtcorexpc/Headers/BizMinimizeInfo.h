//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizRect, FlutterStandardTypedData, NSNumber, NSString;

@interface BizMinimizeInfo : NSObject
{
    NSNumber *_localId;
    NSNumber *_svrId;
    NSString *_url;
    NSString *_userName;
    NSString *_nickName;
    NSString *_title;
    NSString *_coverUrl;
    NSNumber *_itemShowType;
    FlutterStandardTypedData *_coverImage;
    FlutterStandardTypedData *_animatedImage;
    BizRect *_animatedImageRect;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithLocalId:(id)arg1 svrId:(id)arg2 url:(id)arg3 userName:(id)arg4 nickName:(id)arg5 title:(id)arg6 coverUrl:(id)arg7 itemShowType:(id)arg8 coverImage:(id)arg9 animatedImage:(id)arg10 animatedImageRect:(id)arg11;
- (void).cxx_destruct;
@property(retain, nonatomic) BizRect *animatedImageRect; // @synthesize animatedImageRect=_animatedImageRect;
@property(retain, nonatomic) FlutterStandardTypedData *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) FlutterStandardTypedData *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSNumber *itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *svrId; // @synthesize svrId=_svrId;
@property(retain, nonatomic) NSNumber *localId; // @synthesize localId=_localId;
- (id)toList;

@end

