//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewLifeOpenDetailPageParameter : NSObject
{
    _Bool _isPreview;
    NSString *_exportedFeedId;
    NSString *_nonceId;
    long long _entryScene;
    long long _cardType;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *exportedFeedId; // @synthesize exportedFeedId=_exportedFeedId;
- (id)description;
- (_Bool)valid;

@end

