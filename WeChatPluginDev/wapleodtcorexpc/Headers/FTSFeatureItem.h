//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSFeatureItem : NSObject
{
    unsigned int _featureID;
    NSString *_title;
    NSString *_titlePY;
    NSString *_titleShortPY;
    NSString *_tag;
    NSString *_actionType;
    NSString *_actionUrl;
    NSString *_helpUrl;
    NSString *_updateUrl;
    long long _pluginType;
    NSString *_candidateTitle;
    NSString *_secoundCandidateTitle;
    NSString *_thirdCandidateTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thirdCandidateTitle; // @synthesize thirdCandidateTitle=_thirdCandidateTitle;
@property(retain, nonatomic) NSString *secoundCandidateTitle; // @synthesize secoundCandidateTitle=_secoundCandidateTitle;
@property(retain, nonatomic) NSString *candidateTitle; // @synthesize candidateTitle=_candidateTitle;
@property(nonatomic) long long pluginType; // @synthesize pluginType=_pluginType;
@property(retain, nonatomic) NSString *updateUrl; // @synthesize updateUrl=_updateUrl;
@property(retain, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *titleShortPY; // @synthesize titleShortPY=_titleShortPY;
@property(retain, nonatomic) NSString *titlePY; // @synthesize titlePY=_titlePY;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int featureID; // @synthesize featureID=_featureID;
- (_Bool)shouldJumpWeApp;
- (_Bool)shouldJumpNative;
- (_Bool)shouldJumpWeb;
- (id)init;
- (id)diffIdentifier;
@property(nonatomic, readonly) NSString *userName;

@end

