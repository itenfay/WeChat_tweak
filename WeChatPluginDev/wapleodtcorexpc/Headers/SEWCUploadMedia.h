//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCUrl;

@interface SEWCUploadMedia : NSObject
{
    NSString *serverID;
    NSString *clientID;
    long long type;
    long long subType;
    long long outType;
    NSData *buffer;
    _Bool isFinished;
    WCUrl *bufferUrl;
    WCUrl *lowBandUrl;
    WCUrl *bufferDataUrl;
    WCUrl *lowBandDataUrl;
    NSMutableArray *thumbUrlsList;
    struct CGSize imgSize;
    NSString *title;
    NSString *desc;
    long long imageFrom;
    long long imageFilterID;
    _Bool isThumbForPrevMeida;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    NSString *userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) _Bool isThumbForPrevMeida; // @synthesize isThumbForPrevMeida;
@property(nonatomic) long long imageFilterID; // @synthesize imageFilterID;
@property(nonatomic) long long imageFrom; // @synthesize imageFrom;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
@property(retain, nonatomic) WCUrl *lowBandDataUrl; // @synthesize lowBandDataUrl;
@property(retain, nonatomic) WCUrl *bufferDataUrl; // @synthesize bufferDataUrl;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) WCUrl *bufferUrl; // @synthesize bufferUrl;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer;
@property(retain, nonatomic) NSMutableArray *thumbUrlsList; // @synthesize thumbUrlsList;
@property(nonatomic) long long outType; // @synthesize outType;
@property(nonatomic) long long subType; // @synthesize subType;
@property(nonatomic) long long type; // @synthesize type;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mediaBuffer;
- (id)init;

@end

