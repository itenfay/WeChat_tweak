//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMFavTextComponentData
{
    _Bool _leftHasImage;
    _Bool _isFromExcerpt;
    NSString *_title;
    NSString *_des;
    NSArray *_chatNames;
    NSArray *_chatContents;
    long long _favType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromExcerpt; // @synthesize isFromExcerpt=_isFromExcerpt;
@property(nonatomic) long long favType; // @synthesize favType=_favType;
@property(retain, nonatomic) NSArray *chatContents; // @synthesize chatContents=_chatContents;
@property(retain, nonatomic) NSArray *chatNames; // @synthesize chatNames=_chatNames;
@property(nonatomic) _Bool leftHasImage; // @synthesize leftHasImage=_leftHasImage;
@property(retain, nonatomic) NSString *des; // @synthesize des=_des;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)fixComponentWidthWith:(unsigned long long)arg1 hasThumbAtRight:(_Bool)arg2;

@end

