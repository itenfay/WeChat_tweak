//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMailContact, NSMutableArray, NSString;

@interface CMail : NSObject
{
    int tipColor;
    unsigned int _sendType;
    CMailContact *from;
    NSMutableArray *tolist;
    NSMutableArray *cclist;
    NSMutableArray *bcclist;
    NSString *subject;
    NSString *datetime;
    NSString *contentType;
    NSString *content;
    NSMutableArray *attachlist;
    NSString *tipWording;
    NSString *_oldMailId;
}

+ (id)stringForContacts:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sendType; // @synthesize sendType=_sendType;
@property(retain, nonatomic) NSString *oldMailId; // @synthesize oldMailId=_oldMailId;
@property(retain, nonatomic) NSString *tipWording; // @synthesize tipWording;
@property(nonatomic) int tipColor; // @synthesize tipColor;
@property(retain, nonatomic) NSMutableArray *attachlist; // @synthesize attachlist;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType;
@property(retain, nonatomic) NSString *datetime; // @synthesize datetime;
@property(retain, nonatomic) NSString *subject; // @synthesize subject;
@property(retain, nonatomic) NSMutableArray *bcclist; // @synthesize bcclist;
@property(retain, nonatomic) NSMutableArray *cclist; // @synthesize cclist;
@property(retain, nonatomic) NSMutableArray *tolist; // @synthesize tolist;
@property(retain, nonatomic) CMailContact *from; // @synthesize from;
- (id)appendToNewMailContent:(id)arg1;
- (id)briefDesc;
- (id)description;
- (id)initWithXml:(id)arg1;
- (void)parseFromXML:(id)arg1;

@end

