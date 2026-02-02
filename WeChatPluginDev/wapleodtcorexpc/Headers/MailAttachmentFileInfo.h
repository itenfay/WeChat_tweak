//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MailAttachmentFileInfo : NSObject
{
    unsigned int startPos;
    unsigned int totalSize;
    NSString *clientID;
    NSString *localPath;
    NSString *fileName;
    NSString *attachID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int totalSize; // @synthesize totalSize;
@property(nonatomic) unsigned int startPos; // @synthesize startPos;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;

@end

