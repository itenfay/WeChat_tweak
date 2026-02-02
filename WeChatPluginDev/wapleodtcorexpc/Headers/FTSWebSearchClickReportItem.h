//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSWebSearchClickReportItem : NSObject
{
    unsigned int _scene;
    unsigned int _docPos;
    unsigned int _typePos;
    unsigned int _isHomePage;
    unsigned int _expand1;
    unsigned int _clickType;
    NSString *_searchID;
    NSString *_recommendID;
    unsigned long long _businessType;
    NSString *_docID;
    unsigned long long _timeStamp;
    NSString *_suggestionID;
    NSString *_expand2;
    NSString *_logString;
    NSString *_cdnHttpHead;
    NSString *_videoUrl;
    NSString *_byPass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *byPass; // @synthesize byPass=_byPass;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *cdnHttpHead; // @synthesize cdnHttpHead=_cdnHttpHead;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(retain, nonatomic) NSString *expand2; // @synthesize expand2=_expand2;
@property(nonatomic) unsigned int clickType; // @synthesize clickType=_clickType;
@property(retain, nonatomic) NSString *suggestionID; // @synthesize suggestionID=_suggestionID;
@property(nonatomic) unsigned int expand1; // @synthesize expand1=_expand1;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned int isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) unsigned int typePos; // @synthesize typePos=_typePos;
@property(nonatomic) unsigned int docPos; // @synthesize docPos=_docPos;
@property(retain, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *recommendID; // @synthesize recommendID=_recommendID;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (id)description;
- (_Bool)isValid;
- (id)initWithLogString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

