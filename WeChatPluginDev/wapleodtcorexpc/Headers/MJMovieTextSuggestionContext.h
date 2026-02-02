//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, MJMovieTextSuggestionSnapshot, NSData, NSMutableArray, NSString;
@protocol MJMovieTextSuggestionContextDataSource;

@interface MJMovieTextSuggestionContext : NSObject
{
    id <MJMovieTextSuggestionContextDataSource> _dataSource;
    NSString *_sessionID;
    NSString *_finderUserName;
    NSString *_userInputWording;
    NSData *_feedEmbedding;
    MJMovieTextSuggestionSnapshot *_snapshot;
}

+ (id)snapshotOCRDataWithText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MJMovieTextSuggestionSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) NSData *feedEmbedding; // @synthesize feedEmbedding=_feedEmbedding;
@property(retain, nonatomic) NSString *userInputWording; // @synthesize userInputWording=_userInputWording;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <MJMovieTextSuggestionContextDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSMutableArray *feedLocations;
@property(readonly, nonatomic) FinderLocation *userLocation;
@property(readonly, nonatomic) NSString *templateID;
@property(readonly, nonatomic) NSString *musicID;
- (id)toCGIContext;
- (_Bool)isSnapshotReady;
- (id)initWithSessionID:(id)arg1 finderUserName:(id)arg2;

@end

