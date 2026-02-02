//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContactExtInfo;

@interface WCFinderContactCreateCGIParam : NSObject
{
    _Bool _notShowLocation;
    _Bool _notShowSex;
    _Bool _showInWXProfile;
    _Bool _dontRecommendToFriends;
    unsigned int _createSceneUserType;
    NSString *_nickname;
    NSString *_signature;
    NSString *_headImageURL;
    WCFinderContactExtInfo *_contactExtInfo;
    WCFinderContactExtInfo *_registerInfo;
    NSString *_clientID;
    NSString *_fromWxUsername;
    NSString *_sourceID;
    unsigned long long _createSceneFeedId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long createSceneFeedId; // @synthesize createSceneFeedId=_createSceneFeedId;
@property(nonatomic) unsigned int createSceneUserType; // @synthesize createSceneUserType=_createSceneUserType;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *fromWxUsername; // @synthesize fromWxUsername=_fromWxUsername;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) _Bool dontRecommendToFriends; // @synthesize dontRecommendToFriends=_dontRecommendToFriends;
@property(nonatomic) _Bool showInWXProfile; // @synthesize showInWXProfile=_showInWXProfile;
@property(nonatomic) _Bool notShowSex; // @synthesize notShowSex=_notShowSex;
@property(nonatomic) _Bool notShowLocation; // @synthesize notShowLocation=_notShowLocation;
@property(retain, nonatomic) WCFinderContactExtInfo *registerInfo; // @synthesize registerInfo=_registerInfo;
@property(retain, nonatomic) WCFinderContactExtInfo *contactExtInfo; // @synthesize contactExtInfo=_contactExtInfo;
@property(copy, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;

@end

