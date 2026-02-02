//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WSSimilarEmotItemView;

@interface WSEmoticonModel : NSObject
{
    unsigned int _type;
    unsigned int _pageNumber;
    NSString *_aesKey;
    NSString *_docID;
    NSString *_encryptUrl;
    NSString *_md5;
    NSString *_productID;
    NSString *_productName;
    NSString *_productUrl;
    NSString *_thumb;
    NSString *_sourceTitle;
    NSString *_hevcUrl;
    NSString *_hevcMd5;
    NSString *_meaning;
    NSData *_imgData;
    WSSimilarEmotItemView *_weakHolder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WSSimilarEmotItemView *weakHolder; // @synthesize weakHolder=_weakHolder;
@property(retain, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
@property(retain, nonatomic) NSString *meaning; // @synthesize meaning=_meaning;
@property(retain, nonatomic) NSString *hevcMd5; // @synthesize hevcMd5=_hevcMd5;
@property(retain, nonatomic) NSString *hevcUrl; // @synthesize hevcUrl=_hevcUrl;
@property(nonatomic) unsigned int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(retain, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(retain, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
- (id)emoticonWrap;

@end

