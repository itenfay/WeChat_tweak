//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameGeneralStatObject : NSObject
{
    unsigned int _opId;
    unsigned int _processTime;
    int _errorCode;
    unsigned int _sceneId;
    NSString *_errorDesc;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sceneId; // @synthesize sceneId=_sceneId;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int processTime; // @synthesize processTime=_processTime;
@property(nonatomic) unsigned int opId; // @synthesize opId=_opId;
- (id)getReportStr;
- (id)init;

@end

