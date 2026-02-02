//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CdnTimelineMediaOfSightInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    _Bool m_bHaveThumb;
    NSString *m_nsThumbFilePath;
    _Bool useLargeFileAPI;
    int _thumbFileType;
    NSDictionary *_customRequestHeaders;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *customRequestHeaders; // @synthesize customRequestHeaders=_customRequestHeaders;
@property(nonatomic) int thumbFileType; // @synthesize thumbFileType=_thumbFileType;
@property(nonatomic) _Bool useLargeFileAPI; // @synthesize useLargeFileAPI;
@property(retain, nonatomic) NSString *m_nsThumbFilePath; // @synthesize m_nsThumbFilePath;
@property(nonatomic) _Bool m_bHaveThumb; // @synthesize m_bHaveThumb;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

